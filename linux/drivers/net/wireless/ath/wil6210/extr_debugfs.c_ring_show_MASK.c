
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef size_t uint ;
typedef int u32 ;
struct wil_ring_tx_data {int idle; scalar_t__ begin; scalar_t__ dot1x_open; scalar_t__ agg_amsdu; int agg_timeout; int agg_wsize; } ;
struct wil_ring {int swhead; int swtail; int size; scalar_t__ va; } ;
struct wil6210_priv {int** ring2cid_tid; int max_assoc_sta; TYPE_1__* sta; struct wil_ring_tx_data* ring_tx_data; struct wil_ring* ring_tx; struct wil_ring ring_rx; } ;
struct seq_file {struct wil6210_priv* private; } ;
typedef int sidle ;
typedef int name ;
typedef scalar_t__ cycles_t ;
struct TYPE_2__ {int addr; } ;


 size_t FUNC_0 (struct wil_ring*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct seq_file*,char*,char*,int,int,char*,...) ;
 int FUNC_4 (char*,int,char*,...) ;
 int FUNC_5 (struct seq_file*,struct wil6210_priv*,char*,struct wil_ring*,char,char) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_0, void *VAR_1)
{
 uint VAR_2;
 struct wil6210_priv *VAR_3 = VAR_0->private;

 FUNC_5(VAR_0, VAR_3, "rx", &VAR_3->ring_rx, 'S', '_');

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_3->ring_tx); VAR_2++) {
  struct wil_ring *VAR_4 = &VAR_3->ring_tx[VAR_2];
  struct wil_ring_tx_data *VAR_5 = &VAR_3->ring_tx_data[VAR_2];

  if (VAR_4->va) {
   int VAR_6 = VAR_3->ring2cid_tid[VAR_2][0];
   int VAR_7 = VAR_3->ring2cid_tid[VAR_2][1];
   u32 VAR_8 = VAR_4->swhead;
   u32 VAR_9 = VAR_4->swtail;
   int VAR_10 = (VAR_4->size + VAR_8 - VAR_9)
       % VAR_4->size;
   int VAR_11 = VAR_4->size - VAR_10 - 1;
   char VAR_12[10];
   char VAR_13[10];

   cycles_t VAR_14 = FUNC_2();
   uint64_t VAR_15 = VAR_5->idle * 100;
   uint64_t VAR_16 = VAR_14 - VAR_5->begin;

   if (VAR_16 != 0) {
    FUNC_1(VAR_15, VAR_16);
    FUNC_4(VAR_13, sizeof(VAR_13), "%3d%%",
      (int)VAR_15);
   } else {
    FUNC_4(VAR_13, sizeof(VAR_13), "N/A");
   }
   VAR_5->begin = VAR_14;
   VAR_5->idle = 0ULL;

   FUNC_4(VAR_12, sizeof(VAR_12), "tx_%2d", VAR_2);

   if (VAR_6 < VAR_3->max_assoc_sta)
    FUNC_3(VAR_0,
        "\n%pM CID %d TID %d 1x%s BACK([%u] %u TU A%s) [%3d|%3d] idle %s\n",
        VAR_3->sta[VAR_6].addr, VAR_6, VAR_7,
        VAR_5->dot1x_open ? "+" : "-",
        VAR_5->agg_wsize,
        VAR_5->agg_timeout,
        VAR_5->agg_amsdu ? "+" : "-",
        VAR_10, VAR_11, VAR_13);
   else
    FUNC_3(VAR_0,
        "\nBroadcast 1x%s [%3d|%3d] idle %s\n",
        VAR_5->dot1x_open ? "+" : "-",
        VAR_10, VAR_11, VAR_13);

   FUNC_5(VAR_0, VAR_3, VAR_12, VAR_4, '_', 'H');
  }
 }

 return 0;
}
