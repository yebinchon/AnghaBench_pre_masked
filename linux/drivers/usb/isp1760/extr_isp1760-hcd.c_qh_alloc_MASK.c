
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp1760_qh {int slot; int qtd_list; int qh_list; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 struct isp1760_qh* FUNC_1 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static struct isp1760_qh *FUNC_2(gfp_t VAR_1)
{
 struct isp1760_qh *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_2)
  return ((void*)0);

 FUNC_0(&VAR_2->qh_list);
 FUNC_0(&VAR_2->qtd_list);
 VAR_2->slot = -1;

 return VAR_2;
}
