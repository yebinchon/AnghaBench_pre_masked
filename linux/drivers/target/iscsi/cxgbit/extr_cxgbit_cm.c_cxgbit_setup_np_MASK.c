
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_storage {scalar_t__ ss_family; } ;
struct iscsi_np {struct cxgbit_np* np_context; struct sockaddr_storage np_sockaddr; } ;
struct TYPE_3__ {int completion; } ;
struct TYPE_4__ {int state; int * cdev; struct sockaddr_storage local_addr; TYPE_1__ wr_wait; } ;
struct cxgbit_np {TYPE_2__ com; struct iscsi_np* np; int kref; int np_accept_lock; int np_accept_list; int accept_comp; int accept_wait; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct cxgbit_np*) ;
 int FUNC_2 (struct cxgbit_np*) ;
 int FUNC_3 (struct cxgbit_np*) ;
 int FUNC_4 (struct cxgbit_np*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct cxgbit_np* FUNC_8 (int,int ) ;
 int FUNC_9 (struct sockaddr_storage*,struct sockaddr_storage*,int) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct iscsi_np *VAR_6, struct sockaddr_storage *VAR_7)
{
 struct cxgbit_np *VAR_8;
 int VAR_9;

 if ((VAR_7->ss_family != VAR_0) &&
     (VAR_7->ss_family != VAR_1))
  return -VAR_3;

 VAR_8 = FUNC_8(sizeof(*VAR_8), VAR_5);
 if (!VAR_8)
  return -VAR_4;

 FUNC_6(&VAR_8->accept_wait);
 FUNC_5(&VAR_8->com.wr_wait.completion);
 FUNC_5(&VAR_8->accept_comp);
 FUNC_0(&VAR_8->np_accept_list);
 FUNC_10(&VAR_8->np_accept_lock);
 FUNC_7(&VAR_8->kref);
 FUNC_9(&VAR_6->np_sockaddr, VAR_7,
        sizeof(struct sockaddr_storage));
 FUNC_9(&VAR_8->com.local_addr, &VAR_6->np_sockaddr,
        sizeof(VAR_8->com.local_addr));

 VAR_8->np = VAR_6;
 VAR_8->com.cdev = ((void*)0);

 if (FUNC_1(VAR_8))
  VAR_9 = FUNC_3(VAR_8);
 else
  VAR_9 = FUNC_4(VAR_8);

 if (VAR_9) {
  FUNC_2(VAR_8);
  return -VAR_3;
 }

 VAR_6->np_context = VAR_8;
 VAR_8->com.state = VAR_2;
 return 0;
}
