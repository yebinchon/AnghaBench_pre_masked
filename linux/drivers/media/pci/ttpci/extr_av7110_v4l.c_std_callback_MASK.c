
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_standard {int id; } ;
struct saa7146_dev {scalar_t__ ext_priv; } ;
struct av7110 {int vidmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct av7110*,int ) ;

__attribute__((used)) static int FUNC_1(struct saa7146_dev* VAR_4, struct saa7146_standard *VAR_5)
{
 struct av7110 *VAR_6 = (struct av7110*) VAR_4->ext_priv;

 if (VAR_5->id & VAR_3) {
  VAR_6->vidmode = VAR_1;
  FUNC_0(VAR_6, VAR_6->vidmode);
 }
 else if (VAR_5->id & VAR_2) {
  VAR_6->vidmode = VAR_0;
  FUNC_0(VAR_6, VAR_6->vidmode);
 }
 else
  return -1;

 return 0;
}
