
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cedrus_dev {int dummy; } ;
struct cedrus_ctx {struct cedrus_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cedrus_dev*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct cedrus_ctx *VAR_4)
{
 struct cedrus_dev *VAR_5 = VAR_4->dev;
 u32 VAR_6;


 VAR_6 = VAR_1 | VAR_3 |
       VAR_2;

 FUNC_0(VAR_5, VAR_0, VAR_6);
}
