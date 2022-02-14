
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct ifx_spi_device* driver_data; } ;
struct ifx_spi_device {int signal_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_12)
{
 unsigned int VAR_13;
 struct ifx_spi_device *VAR_14 = VAR_12->driver_data;

 VAR_13 =
 (FUNC_0(VAR_5, &VAR_14->signal_state) ? VAR_11 : 0) |
 (FUNC_0(VAR_3, &VAR_14->signal_state) ? VAR_9 : 0) |
 (FUNC_0(VAR_0, &VAR_14->signal_state) ? VAR_7 : 0) |
 (FUNC_0(VAR_2, &VAR_14->signal_state) ? VAR_8 : 0) |
 (FUNC_0(VAR_1, &VAR_14->signal_state) ? VAR_6 : 0) |
 (FUNC_0(VAR_4, &VAR_14->signal_state) ? VAR_10 : 0);
 return VAR_13;
}
