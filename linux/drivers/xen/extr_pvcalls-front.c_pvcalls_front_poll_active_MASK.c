
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int inflight_conn_req; struct pvcalls_data_intf* ring; } ;
struct sock_mapping {TYPE_1__ active; } ;
struct pvcalls_data_intf {scalar_t__ out_error; scalar_t__ in_error; } ;
struct pvcalls_bedata {int dummy; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef scalar_t__ int32_t ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct file*,int *,int *) ;
 scalar_t__ FUNC_1 (struct sock_mapping*) ;
 scalar_t__ FUNC_2 (struct sock_mapping*) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_5,
           struct pvcalls_bedata *VAR_6,
           struct sock_mapping *VAR_7,
           poll_table *VAR_8)
{
 __poll_t VAR_9 = 0;
 int32_t VAR_10, VAR_11;
 struct pvcalls_data_intf *VAR_12 = VAR_7->active.ring;

 VAR_11 = VAR_12->out_error;
 VAR_10 = VAR_12->in_error;

 FUNC_0(VAR_5, &VAR_7->active.inflight_conn_req, VAR_8);
 if (FUNC_2(VAR_7))
  VAR_9 |= VAR_2 | VAR_4;
 if (FUNC_1(VAR_7))
  VAR_9 |= VAR_1 | VAR_3;
 if (VAR_10 != 0 || VAR_11 != 0)
  VAR_9 |= VAR_0;

 return VAR_9;
}
