
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct hfa384x_metacmd {int cmd; void* parm2; void* parm1; void* parm0; } ;
struct hfa384x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct hfa384x*,struct hfa384x_metacmd*) ;
 int FUNC_3 (char*,void*,void*,void*,void*) ;

int FUNC_4(struct hfa384x *VAR_1, u16 VAR_2, u16 VAR_3,
    u16 VAR_4, u16 VAR_5)
{
 struct hfa384x_metacmd VAR_6;

 FUNC_3("mode=%d, lowaddr=0x%04x, highaddr=0x%04x, codelen=%d\n",
   VAR_2, VAR_3, VAR_4, VAR_5);

 VAR_6.cmd = (FUNC_0(VAR_0) |
     FUNC_1(VAR_2));

 VAR_6.parm0 = VAR_3;
 VAR_6.parm1 = VAR_4;
 VAR_6.parm2 = VAR_5;

 return FUNC_2(VAR_1, &VAR_6);
}
