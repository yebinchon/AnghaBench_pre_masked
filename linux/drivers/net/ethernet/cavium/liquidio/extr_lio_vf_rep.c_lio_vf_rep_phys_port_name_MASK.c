
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_device {int pf_num; } ;
struct net_device {int dummy; } ;
struct lio_vf_rep_desc {int ifidx; struct octeon_device* oct; } ;


 int VAR_0 ;
 struct lio_vf_rep_desc* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,size_t,char*,int,int) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_1,
     char *VAR_2, size_t VAR_3)
{
 struct lio_vf_rep_desc *VAR_4 = FUNC_0(VAR_1);
 struct octeon_device *VAR_5 = VAR_4->oct;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_3, "pf%dvf%d", VAR_5->pf_num,
         VAR_4->ifidx - VAR_5->pf_num * 64 - 1);
 if (VAR_6 >= VAR_3)
  return -VAR_0;

 return 0;
}
