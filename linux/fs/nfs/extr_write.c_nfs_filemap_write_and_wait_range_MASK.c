
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct address_space {int host; } ;
typedef int loff_t ;


 int FUNC_0 (struct address_space*,int ,int ) ;
 int FUNC_1 (int ,int) ;

int FUNC_2(struct address_space *VAR_0,
  loff_t VAR_1, loff_t VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3 == 0)
  VAR_3 = FUNC_1(VAR_0->host, 1);
 return VAR_3;
}
