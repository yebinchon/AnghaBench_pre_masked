
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wil_status_ring {int* va; int size; int elem_size; int is_rx; } ;
struct wil6210_priv {int use_compressed_rx_status; struct wil_status_ring* srings; } ;
struct seq_file {struct wil6210_priv* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct seq_file*,char*,int,...) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_3, void *VAR_4)
{
 struct wil6210_priv *VAR_5 = VAR_3->private;
 int VAR_6 = VAR_1;
 struct wil_status_ring *VAR_7;
 bool VAR_8;
 u32 VAR_9 = VAR_2;
 u32 *VAR_10;

 if (VAR_6 >= VAR_0) {
  FUNC_0(VAR_3, "invalid status ring index %d\n", VAR_6);
  return 0;
 }

 VAR_7 = &VAR_5->srings[VAR_6];
 VAR_8 = !VAR_7->is_rx;

 if (!VAR_7->va) {
  FUNC_0(VAR_3, "No %cX status ring\n", VAR_8 ? 'T' : 'R');
  return 0;
 }

 if (VAR_9 >= VAR_7->size) {
  FUNC_0(VAR_3, "%cxDesc index (%d) >= size (%d)\n",
      VAR_8 ? 'T' : 'R', VAR_9, VAR_7->size);
  return 0;
 }

 VAR_10 = VAR_7->va + (VAR_7->elem_size * VAR_9);

 FUNC_0(VAR_3, "%cx[%d][%3d] = {\n",
     VAR_8 ? 'T' : 'R', VAR_6, VAR_9);

 FUNC_0(VAR_3, "  0x%08x 0x%08x 0x%08x 0x%08x\n",
     VAR_10[0], VAR_10[1], VAR_10[2], VAR_10[3]);
 if (!VAR_8 && !VAR_5->use_compressed_rx_status)
  FUNC_0(VAR_3, "  0x%08x 0x%08x 0x%08x 0x%08x\n",
      VAR_10[4], VAR_10[5], VAR_10[6], VAR_10[7]);

 FUNC_1(VAR_3, "}\n");

 return 0;
}
