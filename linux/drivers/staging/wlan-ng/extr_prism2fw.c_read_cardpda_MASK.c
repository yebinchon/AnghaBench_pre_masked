
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct wlandevice {int name; } ;
struct pda {int buf; } ;
struct TYPE_4__ {int data; void* status; int len; int did; } ;
struct TYPE_3__ {int len; scalar_t__ data; void* status; int did; } ;
struct p80211msg_p2req_readpda {int msglen; TYPE_2__ pda; TYPE_1__ resultcode; int devname; int msgcode; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct p80211msg_p2req_readpda*) ;
 struct p80211msg_p2req_readpda* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct pda*) ;
 scalar_t__ FUNC_4 (struct wlandevice*,struct p80211msg_p2req_readpda*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct pda *VAR_8, struct wlandevice *VAR_9)
{
 int VAR_10 = 0;
 struct p80211msg_p2req_readpda *VAR_11;

 VAR_11 = FUNC_1(sizeof(*VAR_11), VAR_4);
 if (!VAR_11)
  return -VAR_3;


 VAR_11->msgcode = VAR_0;
 VAR_11->msglen = sizeof(VAR_11);
 FUNC_5(VAR_11->devname, VAR_9->name);
 VAR_11->pda.did = VAR_1;
 VAR_11->pda.len = VAR_5;
 VAR_11->pda.status = VAR_6;
 VAR_11->resultcode.did = VAR_2;
 VAR_11->resultcode.len = sizeof(u32);
 VAR_11->resultcode.status = VAR_6;

 if (FUNC_4(VAR_9, VAR_11) != 0) {

  VAR_10 = -1;
 } else if (VAR_11->resultcode.data == VAR_7) {
  FUNC_2(VAR_8->buf, VAR_11->pda.data, VAR_5);
  VAR_10 = FUNC_3(VAR_8);
 } else {

  VAR_10 = -1;
 }

 FUNC_0(VAR_11);
 return VAR_10;
}
