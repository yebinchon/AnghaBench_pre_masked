
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vhci_unlink {int unlink_seqnum; int seqnum; } ;
struct TYPE_8__ {int tcp_socket; } ;
struct vhci_device {TYPE_4__ ud; int devid; } ;
struct TYPE_6__ {int seqnum; } ;
struct TYPE_7__ {TYPE_2__ cmd_unlink; } ;
struct TYPE_5__ {scalar_t__ ep; int devid; int seqnum; int command; } ;
struct usbip_header {int iov_len; struct usbip_header* iov_base; TYPE_3__ u; TYPE_1__ base; } ;
struct msghdr {int iov_len; struct msghdr* iov_base; TYPE_3__ u; TYPE_1__ base; } ;
struct kvec {int iov_len; struct kvec* iov_base; TYPE_3__ u; TYPE_1__ base; } ;
typedef int pdu_header ;
typedef int msg ;
typedef int iov ;


 int VAR_0 ;
 int VAR_1 ;
 struct vhci_unlink* FUNC_0 (struct vhci_device*) ;
 int FUNC_1 (int ,struct usbip_header*,struct usbip_header*,int,size_t) ;
 int FUNC_2 (struct usbip_header*,int ,int) ;
 int FUNC_3 (char*,int,size_t) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (struct usbip_header*,int) ;

__attribute__((used)) static int FUNC_7(struct vhci_device *VAR_2)
{
 struct vhci_unlink *VAR_3 = ((void*)0);

 struct msghdr VAR_4;
 struct kvec VAR_5;
 size_t VAR_6;
 size_t VAR_7 = 0;

 while ((VAR_3 = FUNC_0(VAR_2)) != ((void*)0)) {
  int VAR_8;
  struct usbip_header VAR_9;

  FUNC_2(&VAR_9, 0, sizeof(VAR_9));
  FUNC_2(&VAR_4, 0, sizeof(VAR_4));
  FUNC_2(&VAR_5, 0, sizeof(VAR_5));

  FUNC_4("setup cmd unlink, %lu\n", VAR_3->seqnum);


  VAR_9.base.command = VAR_0;
  VAR_9.base.seqnum = VAR_3->seqnum;
  VAR_9.base.devid = VAR_2->devid;
  VAR_9.base.ep = 0;
  VAR_9.u.cmd_unlink.seqnum = VAR_3->unlink_seqnum;

  FUNC_6(&VAR_9, 1);

  VAR_5.iov_base = &VAR_9;
  VAR_5.iov_len = sizeof(VAR_9);
  VAR_6 = sizeof(VAR_9);

  VAR_8 = FUNC_1(VAR_2->ud.tcp_socket, &VAR_4, &VAR_5, 1, VAR_6);
  if (VAR_8 != VAR_6) {
   FUNC_3("sendmsg failed!, ret=%d for %zd\n", VAR_8,
          VAR_6);
   FUNC_5(&VAR_2->ud, VAR_1);
   return -1;
  }

  FUNC_4("send txdata\n");

  VAR_7 += VAR_6;
 }

 return VAR_7;
}
