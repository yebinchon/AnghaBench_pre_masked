
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u16 ;
struct wil_rx_status_extended {int dummy; } ;
struct wil_rx_status_compressed {int dummy; } ;
struct wil_ring {int dummy; } ;
struct wil6210_priv {int rx_status_ring_order; int rx_buff_id_count; int num_rx_status_rings; int * srings; int rx_buf_len; int use_rx_hw_reordering; scalar_t__ use_compressed_rx_status; struct wil_ring ring_rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct wil6210_priv*,char*,int,...) ;
 int FUNC_1 (struct wil6210_priv*,char*) ;
 int FUNC_2 (struct wil6210_priv*) ;
 int FUNC_3 (struct wil6210_priv*) ;
 int FUNC_4 (struct wil6210_priv*,char*,int,int,int) ;
 int FUNC_5 (struct wil6210_priv*,int) ;
 int FUNC_6 (struct wil6210_priv*,int,int ) ;
 int FUNC_7 (struct wil6210_priv*,int,size_t,int) ;
 int FUNC_8 (struct wil6210_priv*,struct wil_ring*) ;
 int FUNC_9 (struct wil6210_priv*) ;
 int FUNC_10 (struct wil6210_priv*) ;
 int FUNC_11 (struct wil6210_priv*,int *) ;
 int FUNC_12 (struct wil6210_priv*,int ) ;

__attribute__((used)) static int FUNC_13(struct wil6210_priv *VAR_7, uint VAR_8)
{
 u16 VAR_9, VAR_10 = 1 << VAR_8;
 struct wil_ring *VAR_11 = &VAR_7->ring_rx;
 int VAR_12;
 size_t VAR_13 = VAR_7->use_compressed_rx_status ?
  sizeof(struct wil_rx_status_compressed) :
  sizeof(struct wil_rx_status_extended);
 int VAR_14;


 if (VAR_7->use_compressed_rx_status && !VAR_7->use_rx_hw_reordering) {
  FUNC_1(VAR_7,
   "compressed RX status cannot be used with SW reorder\n");
  return -VAR_1;
 }
 if (VAR_7->rx_status_ring_order <= VAR_8)

  VAR_7->rx_status_ring_order = VAR_8 + 1;
 if (VAR_7->rx_buff_id_count <= VAR_10)

  VAR_7->rx_buff_id_count = VAR_10 + 512;
 if (VAR_7->rx_status_ring_order < VAR_6 ||
     VAR_7->rx_status_ring_order > VAR_5)
  VAR_7->rx_status_ring_order = VAR_4;

 VAR_9 = 1 << VAR_7->rx_status_ring_order;

 FUNC_0(VAR_7,
       "rx_init, desc_ring_size=%u, status_ring_size=%u, elem_size=%zu\n",
       VAR_10, VAR_9, VAR_13);

 FUNC_9(VAR_7);


 if (VAR_7->num_rx_status_rings > VAR_2 - 1)
  VAR_7->num_rx_status_rings = VAR_2 - 1;

 FUNC_0(VAR_7, "rx_init: allocate %d status rings\n",
       VAR_7->num_rx_status_rings);

 VAR_12 = FUNC_12(VAR_7, VAR_7->rx_buf_len);
 if (VAR_12)
  return VAR_12;


 for (VAR_14 = 0; VAR_14 < VAR_7->num_rx_status_rings; VAR_14++) {
  int VAR_15 = FUNC_2(VAR_7);

  if (VAR_15 < 0) {
   VAR_12 = -VAR_0;
   goto err_free_status;
  }
  VAR_12 = FUNC_7(VAR_7, VAR_9, VAR_13,
           VAR_15);
  if (VAR_12)
   goto err_free_status;
 }


 VAR_12 = FUNC_6(VAR_7, VAR_10,
       VAR_3);
 if (VAR_12)
  goto err_free_status;

 if (VAR_7->rx_buff_id_count >= VAR_9) {
  FUNC_4(VAR_7,
    "rx_buff_id_count %d exceeds sring_size %d. set it to %d\n",
    VAR_7->rx_buff_id_count, VAR_9,
    VAR_9 - 1);
  VAR_7->rx_buff_id_count = VAR_9 - 1;
 }


 VAR_12 = FUNC_5(VAR_7, VAR_7->rx_buff_id_count);
 if (VAR_12)
  goto err_free_desc;


 VAR_12 = FUNC_10(VAR_7);
 if (VAR_12)
  goto err_free_rx_buff_arr;

 return 0;
err_free_rx_buff_arr:
 FUNC_3(VAR_7);
err_free_desc:
 FUNC_8(VAR_7, VAR_11);
err_free_status:
 for (VAR_14 = 0; VAR_14 < VAR_7->num_rx_status_rings; VAR_14++)
  FUNC_11(VAR_7, &VAR_7->srings[VAR_14]);

 return VAR_12;
}
