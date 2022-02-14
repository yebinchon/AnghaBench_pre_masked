
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rio_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rio_channel*,int ,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 struct rio_channel* FUNC_2 (int ) ;
 int FUNC_3 (struct rio_channel*) ;

__attribute__((used)) static int FUNC_4(u16 VAR_4)
{
 struct rio_channel *VAR_5 = ((void*)0);
 int VAR_6 = 0;

 FUNC_1(VAR_0, "(ch_%d)", VAR_4);

 VAR_5 = FUNC_2(VAR_4);
 if (!VAR_5)
  return -VAR_1;
 if (!FUNC_0(VAR_5, VAR_2, VAR_3))
  VAR_6 = -VAR_1;
 FUNC_3(VAR_5);
 return VAR_6;
}
