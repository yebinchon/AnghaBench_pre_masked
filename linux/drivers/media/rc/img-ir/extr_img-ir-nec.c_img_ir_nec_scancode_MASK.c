
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct img_ir_scancode_req {int scancode; int protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned int) ;

__attribute__((used)) static int FUNC_1(int VAR_6, u64 VAR_7, u64 VAR_8,
          struct img_ir_scancode_req *VAR_9)
{
 unsigned int VAR_10, VAR_11, VAR_12, VAR_13;

 if (!VAR_6)
  return VAR_1;
 if (VAR_6 != 32)
  return -VAR_0;

 VAR_10 = (VAR_7 >> 0) & 0xff;
 VAR_11 = (VAR_7 >> 8) & 0xff;
 VAR_12 = (VAR_7 >> 16) & 0xff;
 VAR_13 = (VAR_7 >> 24) & 0xff;
 if ((VAR_13 ^ VAR_12) != 0xff) {


  VAR_9->scancode = FUNC_0(VAR_10) << 24 |
    FUNC_0(VAR_11) << 16 |
    FUNC_0(VAR_12) << 8 |
    FUNC_0(VAR_13);
  VAR_9->protocol = VAR_4;
 } else if ((VAR_11 ^ VAR_10) != 0xff) {


  VAR_9->scancode = VAR_10 << 16 |
    VAR_11 << 8 |
    VAR_12;
  VAR_9->protocol = VAR_5;
 } else {


  VAR_9->scancode = VAR_10 << 8 |
    VAR_12;
  VAR_9->protocol = VAR_3;
 }
 return VAR_2;
}
