
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct tty3270* driver_data; } ;
struct tty3270 {scalar_t__ char_count; unsigned char const* char_buf; } ;


 int FUNC_0 (struct tty3270*,struct tty_struct*,unsigned char const*,int) ;

__attribute__((used)) static int
FUNC_1(struct tty_struct * VAR_0,
       const unsigned char *VAR_1, int VAR_2)
{
 struct tty3270 *VAR_3;

 VAR_3 = VAR_0->driver_data;
 if (!VAR_3)
  return 0;
 if (VAR_3->char_count > 0) {
  FUNC_0(VAR_3, VAR_0, VAR_3->char_buf, VAR_3->char_count);
  VAR_3->char_count = 0;
 }
 FUNC_0(VAR_3, VAR_0, VAR_1, VAR_2);
 return VAR_2;
}
