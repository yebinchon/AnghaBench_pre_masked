
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_port {struct ofdpa_port* wpriv; } ;
struct ofdpa_port {scalar_t__ stp_state; } ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ofdpa_port*,unsigned char const*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct rocker_port *VAR_4,
           const unsigned char *VAR_5,
           __be16 VAR_6)
{
 struct ofdpa_port *VAR_7 = VAR_4->wpriv;
 int VAR_8 = VAR_3 | VAR_2;

 if (VAR_7->stp_state != VAR_1 &&
     VAR_7->stp_state != VAR_0)
  return 0;

 return FUNC_0(VAR_7, VAR_5, VAR_6, VAR_8);
}
