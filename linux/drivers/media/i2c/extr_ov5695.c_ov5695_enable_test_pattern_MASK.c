
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ov5695 {int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct ov5695 *VAR_4, u32 VAR_5)
{
 u32 VAR_6;

 if (VAR_5)
  VAR_6 = (VAR_5 - 1) | VAR_3;
 else
  VAR_6 = VAR_2;

 return FUNC_0(VAR_4->client, VAR_0,
    VAR_1, VAR_6);
}
