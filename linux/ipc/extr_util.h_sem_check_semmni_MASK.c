
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipc_namespace {scalar_t__* sem_ctls; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct ipc_namespace *VAR_2) {




 return ((VAR_2->sem_ctls[3] < 0) || (VAR_2->sem_ctls[3] > VAR_1))
  ? -VAR_0 : 0;
}
