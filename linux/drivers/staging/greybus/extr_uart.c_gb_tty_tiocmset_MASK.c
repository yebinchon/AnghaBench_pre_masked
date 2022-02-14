
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct tty_struct {struct gb_tty* driver_data; } ;
struct gb_tty {unsigned int ctrlout; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct gb_tty*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_4, unsigned int VAR_5,
      unsigned int VAR_6)
{
 struct gb_tty *VAR_7 = VAR_4->driver_data;
 u8 VAR_8 = VAR_7->ctrlout;

 VAR_5 = (VAR_5 & VAR_2 ? VAR_0 : 0) |
       (VAR_5 & VAR_3 ? VAR_1 : 0);
 VAR_6 = (VAR_6 & VAR_2 ? VAR_0 : 0) |
  (VAR_6 & VAR_3 ? VAR_1 : 0);

 VAR_8 = (VAR_8 & ~VAR_6) | VAR_5;
 if (VAR_7->ctrlout == VAR_8)
  return 0;

 VAR_7->ctrlout = VAR_8;
 return FUNC_0(VAR_7, VAR_8);
}
