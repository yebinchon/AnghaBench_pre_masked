
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmf_pub {struct brcmf_proto* proto; TYPE_1__* bus_if; } ;
struct brcmf_proto {int * debugfs_create; int * add_tdls_peer; int * delete_peer; int * configure_addr_mode; int * set_dcmd; int * query_dcmd; int * hdrpull; int tx_queue_data; } ;
struct TYPE_2__ {scalar_t__ proto_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct brcmf_pub*,char*,...) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct brcmf_pub*) ;
 scalar_t__ FUNC_3 (struct brcmf_pub*) ;
 int FUNC_4 (struct brcmf_proto*) ;
 struct brcmf_proto* FUNC_5 (int,int ) ;

int FUNC_6(struct brcmf_pub *VAR_5)
{
 struct brcmf_proto *VAR_6;

 FUNC_1(VAR_4, "Enter\n");

 VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_3);
 if (!VAR_6)
  goto fail;

 VAR_5->proto = VAR_6;

 if (VAR_5->bus_if->proto_type == VAR_0) {
  if (FUNC_2(VAR_5))
   goto fail;
 } else if (VAR_5->bus_if->proto_type == VAR_1) {
  if (FUNC_3(VAR_5))
   goto fail;
 } else {
  FUNC_0(VAR_5, "Unsupported proto type %d\n",
    VAR_5->bus_if->proto_type);
  goto fail;
 }
 if (!VAR_6->tx_queue_data || (VAR_6->hdrpull == ((void*)0)) ||
     (VAR_6->query_dcmd == ((void*)0)) || (VAR_6->set_dcmd == ((void*)0)) ||
     (VAR_6->configure_addr_mode == ((void*)0)) ||
     (VAR_6->delete_peer == ((void*)0)) || (VAR_6->add_tdls_peer == ((void*)0)) ||
     (VAR_6->debugfs_create == ((void*)0))) {
  FUNC_0(VAR_5, "Not all proto handlers have been installed\n");
  goto fail;
 }
 return 0;

fail:
 FUNC_4(VAR_6);
 VAR_5->proto = ((void*)0);
 return -VAR_2;
}
