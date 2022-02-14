
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switchtec_ntb {int peer_nr_direct_mw; TYPE_1__* peer_shared; } ;
struct ntb_dev {int dummy; } ;
typedef scalar_t__ resource_size_t ;
struct TYPE_2__ {int * mw_sizes; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 struct switchtec_ntb* FUNC_1 (struct ntb_dev*) ;

__attribute__((used)) static int FUNC_2(struct ntb_dev *VAR_3, int VAR_4,
          int VAR_5, resource_size_t *VAR_6,
          resource_size_t *VAR_7,
          resource_size_t *VAR_8)
{
 struct switchtec_ntb *VAR_9 = FUNC_1(VAR_3);
 int VAR_10;
 resource_size_t VAR_11;

 if (VAR_4 != VAR_1)
  return -VAR_0;

 VAR_10 = VAR_5 >= VAR_9->peer_nr_direct_mw;
 VAR_11 = FUNC_0(&VAR_9->peer_shared->mw_sizes[VAR_5]);

 if (VAR_11 == 0)
  return -VAR_0;

 if (VAR_6)
  *VAR_6 = VAR_10 ? VAR_11 : VAR_2;

 if (VAR_7)
  *VAR_7 = VAR_10 ? VAR_11 : VAR_2;

 if (VAR_8)
  *VAR_8 = VAR_11;

 return 0;
}
