
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hermes {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hermes*,int,int,int ) ;
 int FUNC_1 (struct hermes*,int,int,int *) ;
 int FUNC_2 (struct hermes*,int,void const*,unsigned int) ;
 int FUNC_3 (struct hermes*,int,int) ;

__attribute__((used)) static int FUNC_4(struct hermes *VAR_5, int VAR_6, u16 VAR_7,
       u16 VAR_8, const void *VAR_9)
{
 int VAR_10 = VAR_6 ? VAR_4 : VAR_3;
 int VAR_11 = 0;
 unsigned VAR_12;

 if (VAR_8 == 0)
  return -VAR_0;

 VAR_11 = FUNC_0(VAR_5, VAR_6, VAR_7, 0);
 if (VAR_11)
  return VAR_11;

 FUNC_3(VAR_5, VAR_10, VAR_8);
 FUNC_3(VAR_5, VAR_10, VAR_7);

 VAR_12 = VAR_8 - 1;

 FUNC_2(VAR_5, VAR_10, VAR_9, VAR_12 << 1);

 VAR_11 = FUNC_1(VAR_5, VAR_1 | VAR_2,
    VAR_7, ((void*)0));

 return VAR_11;
}
