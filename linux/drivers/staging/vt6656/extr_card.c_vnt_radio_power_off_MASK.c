
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {int rf_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct vnt_private*,int ,int) ;
 int FUNC_1 (struct vnt_private*,int ,int ) ;
 int FUNC_2 (struct vnt_private*) ;

int FUNC_3(struct vnt_private *VAR_7)
{
 int VAR_8 = 0;

 switch (VAR_7->rf_type) {
 case 132:
 case 131:
 case 133:
 case 130:
 case 129:
 case 128:
  VAR_8 = FUNC_0(VAR_7, VAR_4,
     (VAR_5 | VAR_6));
  break;
 }

 if (VAR_8)
  goto end;

 VAR_8 = FUNC_0(VAR_7, VAR_3, VAR_1);
 if (VAR_8)
  goto end;

 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8)
  goto end;

 VAR_8 = FUNC_1(VAR_7, VAR_2, VAR_0);

end:
 return VAR_8;
}
