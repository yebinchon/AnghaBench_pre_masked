
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ast_vhub_dev {int wakeup_en; } ;


 int FUNC_0 (struct ast_vhub_dev*,char*,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct ast_vhub_dev *VAR_3,
    u16 VAR_4, u16 VAR_5,
    bool VAR_6)
{
 FUNC_0(VAR_3, "%s_FEATURE(dev val=%02x)\n",
      VAR_6 ? "SET" : "CLEAR", VAR_5);

 if (VAR_5 != VAR_0)
  return VAR_2;

 VAR_3->wakeup_en = VAR_6;

 return VAR_1;
}
