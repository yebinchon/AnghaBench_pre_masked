
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rocker_port {struct ofdpa_port* wpriv; } ;
struct ofdpa_port {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ofdpa_port*,unsigned char const*,int ,int) ;
 int FUNC_1 (struct ofdpa_port*) ;
 int FUNC_2 (struct ofdpa_port*,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct rocker_port *VAR_2,
      u16 VAR_3, const unsigned char *VAR_4)
{
 struct ofdpa_port *VAR_5 = VAR_2->wpriv;
 __be16 VAR_6 = FUNC_2(VAR_5, VAR_3, ((void*)0));
 int VAR_7 = VAR_1;

 if (!FUNC_1(VAR_5))
  return -VAR_0;

 return FUNC_0(VAR_5, VAR_4, VAR_6, VAR_7);
}
