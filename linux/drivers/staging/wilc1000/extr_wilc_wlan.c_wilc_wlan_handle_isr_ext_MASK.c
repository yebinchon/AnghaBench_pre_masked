
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct wilc {int rx_buffer_offset; TYPE_1__* hif_func; int * rx_buffer; } ;
struct rxq_entry_t {int buffer_size; int * buffer; } ;
struct TYPE_2__ {int (* hif_block_rx_ext ) (struct wilc*,int ,int *,int) ;int (* hif_clear_int_ext ) (struct wilc*,int) ;int (* hif_read_size ) (struct wilc*,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct rxq_entry_t* FUNC_0 (int,int ) ;
 int FUNC_1 (struct wilc*,int*) ;
 int FUNC_2 (struct wilc*,int) ;
 int FUNC_3 (struct wilc*,int ,int *,int) ;
 int FUNC_4 (struct wilc*) ;
 int FUNC_5 (struct wilc*,struct rxq_entry_t*) ;

__attribute__((used)) static void FUNC_6(struct wilc *VAR_4, u32 VAR_5)
{
 u32 VAR_6 = VAR_4->rx_buffer_offset;
 u8 *VAR_7 = ((void*)0);
 u32 VAR_8;
 u32 VAR_9 = 0;
 int VAR_10 = 0;
 struct rxq_entry_t *VAR_11;

 VAR_8 = (VAR_5 & 0x7fff) << 2;

 while (!VAR_8 && VAR_9 < 10) {
  VAR_4->hif_func->hif_read_size(VAR_4, &VAR_8);
  VAR_8 = (VAR_8 & 0x7fff) << 2;
  VAR_9++;
 }

 if (VAR_8 <= 0)
  return;

 if (VAR_3 - VAR_6 < VAR_8)
  VAR_6 = 0;

 VAR_7 = &VAR_4->rx_buffer[VAR_6];

 VAR_4->hif_func->hif_clear_int_ext(VAR_4, VAR_0 | VAR_1);
 VAR_10 = VAR_4->hif_func->hif_block_rx_ext(VAR_4, 0, VAR_7, VAR_8);
 if (!VAR_10)
  return;

 VAR_6 += VAR_8;
 VAR_4->rx_buffer_offset = VAR_6;
 VAR_11 = FUNC_0(sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return;

 VAR_11->buffer = VAR_7;
 VAR_11->buffer_size = VAR_8;
 FUNC_5(VAR_4, VAR_11);
 FUNC_4(VAR_4);
}
