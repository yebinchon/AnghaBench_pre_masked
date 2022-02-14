
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct calling_interface_buffer {int* output; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct calling_interface_buffer*,int,int ,int ,int ) ;
 int FUNC_2 (struct calling_interface_buffer*,int ,int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_2, bool VAR_3)
{
 int VAR_4 = VAR_3 ? 1 : 0;
 unsigned long VAR_5 = (unsigned long)VAR_2;
 int VAR_6 = (unsigned long)VAR_2 - 1;
 struct calling_interface_buffer VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 FUNC_1(&VAR_7, 0, 0, 0, 0);
 VAR_10 = FUNC_2(&VAR_7, VAR_0, VAR_1);
 if (VAR_10)
  return VAR_10;
 VAR_9 = VAR_7.output[1];

 FUNC_1(&VAR_7, 0x2, 0, 0, 0);
 VAR_10 = FUNC_2(&VAR_7, VAR_0, VAR_1);
 if (VAR_10)
  return VAR_10;
 VAR_8 = VAR_7.output[1];



 if (VAR_10 == 0 && (VAR_8 & FUNC_0(VAR_6)) &&
     (VAR_9 & FUNC_0(0)) && !(VAR_9 & FUNC_0(16)))
  VAR_4 = 1;

 FUNC_1(&VAR_7, 1 | (VAR_5<<8) | (VAR_4 << 16), 0, 0, 0);
 VAR_10 = FUNC_2(&VAR_7, VAR_0, VAR_1);
 return VAR_10;
}
