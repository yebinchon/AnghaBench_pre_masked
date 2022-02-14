
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ page; } ;
struct TYPE_9__ {int vqs; } ;
struct vhost_net {int refcnt_bias; TYPE_3__ page_frag; TYPE_4__ dev; TYPE_2__* vqs; } ;
struct socket {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct vhost_net* private_data; } ;
struct TYPE_6__ {int queue; } ;
struct TYPE_7__ {int xdp; TYPE_1__ rxq; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vhost_net*) ;
 int FUNC_3 (struct socket*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (struct vhost_net*) ;
 int FUNC_8 (struct vhost_net*,struct socket**,struct socket**) ;
 int FUNC_9 (struct vhost_net*) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_2, struct file *VAR_3)
{
 struct vhost_net *VAR_4 = VAR_3->private_data;
 struct socket *VAR_5;
 struct socket *VAR_6;

 FUNC_8(VAR_4, &VAR_5, &VAR_6);
 FUNC_7(VAR_4);
 FUNC_6(&VAR_4->dev);
 FUNC_5(&VAR_4->dev);
 FUNC_9(VAR_4);
 if (VAR_5)
  FUNC_3(VAR_5);
 if (VAR_6)
  FUNC_3(VAR_6);

 FUNC_4();


 FUNC_7(VAR_4);
 FUNC_1(VAR_4->vqs[VAR_0].rxq.queue);
 FUNC_1(VAR_4->vqs[VAR_1].xdp);
 FUNC_1(VAR_4->dev.vqs);
 if (VAR_4->page_frag.page)
  FUNC_0(VAR_4->page_frag.page, VAR_4->refcnt_bias);
 FUNC_2(VAR_4);
 return 0;
}
