
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct brcmf_pub {TYPE_2__* bus_if; int hdrlen; TYPE_1__* proto; } ;
struct brcmf_proto_bcdc_dcmd {int dummy; } ;
struct brcmf_bcdc {scalar_t__ buf; int msg; } ;
struct TYPE_4__ {scalar_t__ maxctl; } ;
struct TYPE_3__ {struct brcmf_bcdc* pd; int debugfs_create; int init_done; int reset_if; int del_if; int add_if; int rxreorder; int add_tdls_peer; int delete_peer; int configure_addr_mode; int txdata; int tx_queue_data; int set_dcmd; int query_dcmd; int hdrpull; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct brcmf_pub*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (struct brcmf_bcdc*) ;
 struct brcmf_bcdc* FUNC_2 (int,int ) ;

int FUNC_3(struct brcmf_pub *VAR_19)
{
 struct brcmf_bcdc *VAR_20;

 VAR_20 = FUNC_2(sizeof(*VAR_20), VAR_4);
 if (!VAR_20)
  goto fail;


 if ((unsigned long)(&VAR_20->msg + 1) != (unsigned long)VAR_20->buf) {
  FUNC_0(VAR_19, "struct brcmf_proto_bcdc is not correctly defined\n");
  goto fail;
 }

 VAR_19->proto->hdrpull = VAR_11;
 VAR_19->proto->query_dcmd = VAR_13;
 VAR_19->proto->set_dcmd = VAR_16;
 VAR_19->proto->tx_queue_data = VAR_17;
 VAR_19->proto->txdata = VAR_18;
 VAR_19->proto->configure_addr_mode = VAR_7;
 VAR_19->proto->delete_peer = VAR_10;
 VAR_19->proto->add_tdls_peer = VAR_6;
 VAR_19->proto->rxreorder = VAR_15;
 VAR_19->proto->add_if = VAR_5;
 VAR_19->proto->del_if = VAR_9;
 VAR_19->proto->reset_if = VAR_14;
 VAR_19->proto->init_done = VAR_12;
 VAR_19->proto->debugfs_create = VAR_8;
 VAR_19->proto->pd = VAR_20;

 VAR_19->hdrlen += VAR_0 + VAR_2;
 VAR_19->bus_if->maxctl = VAR_1 +
   sizeof(struct brcmf_proto_bcdc_dcmd);
 return 0;

fail:
 FUNC_1(VAR_20);
 return -VAR_3;
}
