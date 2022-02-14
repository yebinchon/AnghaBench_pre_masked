
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbuf {int l_flag; int l_ioevent; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,int,unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (char*,struct lbuf*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct lbuf*) ;

__attribute__((used)) static int FUNC_5(struct lbuf * VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 int VAR_7 = 0;

 FUNC_3("lbmIOWait1: bp:0x%p flag:0x%x:0x%x", VAR_4, VAR_4->l_flag, VAR_5);

 FUNC_0(VAR_6);

 FUNC_1(VAR_4->l_ioevent, (VAR_4->l_flag & VAR_1), VAR_6);

 VAR_7 = (VAR_4->l_flag & VAR_2) ? -VAR_0 : 0;

 if (VAR_5 & VAR_3)
  FUNC_4(VAR_4);

 FUNC_2(VAR_6);

 FUNC_3("lbmIOWait2: bp:0x%p flag:0x%x:0x%x", VAR_4, VAR_4->l_flag, VAR_5);
 return VAR_7;
}
