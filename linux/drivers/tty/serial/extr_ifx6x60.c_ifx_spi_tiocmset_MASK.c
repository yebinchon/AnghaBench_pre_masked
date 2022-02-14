
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct ifx_spi_device* driver_data; } ;
struct ifx_spi_device {int signal_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_5,
       unsigned int VAR_6, unsigned int VAR_7)
{
 struct ifx_spi_device *VAR_8 = VAR_5->driver_data;

 if (VAR_6 & VAR_4)
  FUNC_1(VAR_1, &VAR_8->signal_state);
 if (VAR_6 & VAR_3)
  FUNC_1(VAR_0, &VAR_8->signal_state);
 if (VAR_7 & VAR_4)
  FUNC_0(VAR_1, &VAR_8->signal_state);
 if (VAR_7 & VAR_3)
  FUNC_0(VAR_0, &VAR_8->signal_state);

 FUNC_1(VAR_2, &VAR_8->signal_state);
 return 0;
}
