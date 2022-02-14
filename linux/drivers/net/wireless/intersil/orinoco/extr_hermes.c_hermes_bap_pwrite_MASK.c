
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hermes {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hermes*,int,int ,int ) ;
 int FUNC_1 (struct hermes*,int,void const*,int) ;

__attribute__((used)) static int FUNC_2(struct hermes *VAR_3, int VAR_4, const void *VAR_5,
        int VAR_6, u16 VAR_7, u16 VAR_8)
{
 int VAR_9 = VAR_4 ? VAR_2 : VAR_1;
 int VAR_10 = 0;

 if (VAR_6 < 0)
  return -VAR_0;

 VAR_10 = FUNC_0(VAR_3, VAR_4, VAR_7, VAR_8);
 if (VAR_10)
  goto out;


 FUNC_1(VAR_3, VAR_9, VAR_5, VAR_6);

 out:
 return VAR_10;
}
