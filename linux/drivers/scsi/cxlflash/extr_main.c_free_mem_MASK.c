
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
struct cxlflash_cfg {struct afu* afu; } ;
struct afu {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct cxlflash_cfg *VAR_0)
{
 struct afu *VAR_1 = VAR_0->afu;

 if (VAR_0->afu) {
  FUNC_0((ulong)VAR_1, FUNC_1(sizeof(struct afu)));
  VAR_0->afu = ((void*)0);
 }
}
