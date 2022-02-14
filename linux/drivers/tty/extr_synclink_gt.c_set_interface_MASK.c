
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {int if_mode; int lock; int device_name; } ;


 unsigned short VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct slgt_info*) ;
 unsigned short FUNC_2 (struct slgt_info*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct slgt_info*,int ,unsigned short) ;

__attribute__((used)) static int FUNC_6(struct slgt_info *VAR_3, int VAR_4)
{
  unsigned long VAR_5;
 unsigned short VAR_6;

 FUNC_0(("%s set_interface=%x)\n", VAR_3->device_name, VAR_4));
 FUNC_3(&VAR_3->lock,VAR_5);
 VAR_3->if_mode = VAR_4;

 FUNC_1(VAR_3);


 VAR_6 = FUNC_2(VAR_3, VAR_2);
 if (VAR_3->if_mode & VAR_1)
  VAR_6 |= VAR_0;
 else
  VAR_6 &= ~VAR_0;
 FUNC_5(VAR_3, VAR_2, VAR_6);

 FUNC_4(&VAR_3->lock,VAR_5);
 return 0;
}
