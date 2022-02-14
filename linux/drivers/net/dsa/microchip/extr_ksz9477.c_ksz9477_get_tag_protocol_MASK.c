
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz_device {int features; } ;
struct dsa_switch {struct ksz_device* priv; } ;
typedef enum dsa_tag_protocol { ____Placeholder_dsa_tag_protocol } dsa_tag_protocol ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static enum dsa_tag_protocol FUNC_0(struct dsa_switch *VAR_3,
            int VAR_4)
{
 enum dsa_tag_protocol VAR_5 = VAR_0;
 struct ksz_device *VAR_6 = VAR_3->priv;

 if (VAR_6->features & VAR_2)
  VAR_5 = VAR_1;
 return VAR_5;
}
