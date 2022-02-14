
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchtec_ntb {int nr_direct_mw; } ;
struct ntb_dev {int dummy; } ;
typedef int resource_size_t ;
typedef int phys_addr_t ;


 int VAR_0 ;
 struct switchtec_ntb* FUNC_0 (struct ntb_dev*) ;
 int FUNC_1 (struct switchtec_ntb*,int,int *,int *) ;
 int FUNC_2 (struct switchtec_ntb*,int,int *,int *) ;
 int FUNC_3 (struct ntb_dev*) ;

__attribute__((used)) static int FUNC_4(struct ntb_dev *VAR_1, int VAR_2,
       phys_addr_t *VAR_3,
       resource_size_t *VAR_4)
{
 struct switchtec_ntb *VAR_5 = FUNC_0(VAR_1);

 if (VAR_2 < VAR_5->nr_direct_mw)
  return FUNC_1(VAR_5, VAR_2, VAR_3, VAR_4);
 else if (VAR_2 < FUNC_3(VAR_1))
  return FUNC_2(VAR_5, VAR_2, VAR_3, VAR_4);
 else
  return -VAR_0;
}
