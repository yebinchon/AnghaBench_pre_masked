
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct address_space {scalar_t__ nrpages; int host; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct address_space*,int ,int ,int ) ;

int FUNC_2(struct address_space *VAR_0)
{
 int VAR_1 = 0;

 if (VAR_0->nrpages != 0) {
  FUNC_1(VAR_0, 0, 0, 0);
  VAR_1 = FUNC_0(VAR_0->host);
 }
 return VAR_1;
}
