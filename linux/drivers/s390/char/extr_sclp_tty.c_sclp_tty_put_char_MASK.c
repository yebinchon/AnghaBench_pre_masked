
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned char*,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_1(struct tty_struct *VAR_3, unsigned char VAR_4)
{
 VAR_1[VAR_2++] = VAR_4;
 if (VAR_4 == '\n' || VAR_2 >= VAR_0) {
  FUNC_0(VAR_1, VAR_2, 0);
  VAR_2 = 0;
 }
 return 1;
}
