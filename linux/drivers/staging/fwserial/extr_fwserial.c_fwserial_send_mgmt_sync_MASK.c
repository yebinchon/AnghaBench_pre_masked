
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fwtty_peer {int generation; int unit; int mgmt_addr; int speed; int node_id; TYPE_2__* serial; } ;
struct TYPE_3__ {int len; } ;
struct fwserial_mgmt_pkt {TYPE_1__ hdr; } ;
struct TYPE_4__ {int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int,int ,int ,struct fwserial_mgmt_pkt*,int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 () ;

__attribute__((used)) static inline int FUNC_4(struct fwtty_peer *VAR_4,
       struct fwserial_mgmt_pkt *VAR_5)
{
 int VAR_6;
 int VAR_7, VAR_8 = 5;

 do {
  VAR_6 = VAR_4->generation;
  FUNC_3();

  VAR_7 = FUNC_1(VAR_4->serial->card,
        VAR_3,
        VAR_4->node_id,
        VAR_6, VAR_4->speed,
        VAR_4->mgmt_addr,
        VAR_5, FUNC_0(VAR_5->hdr.len));
  if (VAR_7 == VAR_0 || VAR_7 == VAR_2 ||
      VAR_7 == VAR_1) {
   FUNC_2(&VAR_4->unit, "mgmt write error: %d\n", VAR_7);
   continue;
  } else {
   break;
  }
 } while (--VAR_8 > 0);
 return VAR_7;
}
