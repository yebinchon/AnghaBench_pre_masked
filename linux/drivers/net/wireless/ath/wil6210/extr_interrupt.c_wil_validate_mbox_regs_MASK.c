
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wmi_cmd_hdr {int dummy; } ;
struct TYPE_5__ {size_t entry_size; } ;
struct TYPE_4__ {size_t entry_size; } ;
struct TYPE_6__ {TYPE_2__ tx; TYPE_1__ rx; } ;
struct wil6210_priv {TYPE_3__ mbox_ctl; } ;
struct wil6210_mbox_hdr {int dummy; } ;


 int FUNC_0 (struct wil6210_priv*,char*,size_t) ;

__attribute__((used)) static bool FUNC_1(struct wil6210_priv *VAR_0)
{
 size_t VAR_1 = sizeof(struct wil6210_mbox_hdr) +
  sizeof(struct wmi_cmd_hdr);

 if (VAR_0->mbox_ctl.rx.entry_size < VAR_1) {
  FUNC_0(VAR_0, "rx mbox entry too small (%d)\n",
   VAR_0->mbox_ctl.rx.entry_size);
  return 0;
 }
 if (VAR_0->mbox_ctl.tx.entry_size < VAR_1) {
  FUNC_0(VAR_0, "tx mbox entry too small (%d)\n",
   VAR_0->mbox_ctl.tx.entry_size);
  return 0;
 }

 return 1;
}
