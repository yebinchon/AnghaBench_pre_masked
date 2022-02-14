
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tdo24m {int (* adj_mode ) (struct tdo24m*,int ) ;int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tdo24m*,int ) ;
 int FUNC_1 (struct tdo24m*,int ) ;

__attribute__((used)) static int FUNC_2(struct tdo24m *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_0);
 if (VAR_3)
  goto out;

 VAR_3 = FUNC_1(VAR_2, VAR_1);
 if (VAR_3)
  goto out;

 VAR_3 = VAR_2->adj_mode(VAR_2, VAR_2->mode);
out:
 return VAR_3;
}
