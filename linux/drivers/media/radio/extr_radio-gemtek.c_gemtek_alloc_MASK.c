
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radio_isa_card {int dummy; } ;
struct gemtek {int muted; struct radio_isa_card isa; } ;


 int VAR_0 ;
 struct gemtek* FUNC_0 (int,int ) ;

__attribute__((used)) static struct radio_isa_card *FUNC_1(void)
{
 struct gemtek *VAR_1 = FUNC_0(sizeof(*VAR_1), VAR_0);

 if (VAR_1)
  VAR_1->muted = 1;
 return VAR_1 ? &VAR_1->isa : ((void*)0);
}
