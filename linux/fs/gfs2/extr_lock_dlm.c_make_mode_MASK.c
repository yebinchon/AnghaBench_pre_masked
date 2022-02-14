
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_1 (struct gfs2_sbd*,char*,unsigned int const) ;

__attribute__((used)) static int FUNC_2(struct gfs2_sbd *VAR_4, const unsigned int VAR_5)
{
 switch (VAR_5) {
 case 128:
  return VAR_2;
 case 130:
  return VAR_1;
 case 131:
  return VAR_0;
 case 129:
  return VAR_3;
 }
 FUNC_1(VAR_4, "unknown LM state %d\n", VAR_5);
 FUNC_0();
 return -1;
}
