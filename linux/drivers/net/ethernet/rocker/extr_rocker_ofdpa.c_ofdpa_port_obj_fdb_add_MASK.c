
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rocker_port {struct ofdpa_port* wpriv; } ;
struct ofdpa_port {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (struct ofdpa_port*,unsigned char const*,int ,int ) ;
 int FUNC_1 (struct ofdpa_port*) ;
 int FUNC_2 (struct ofdpa_port*,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct rocker_port *VAR_1,
      u16 VAR_2, const unsigned char *VAR_3)
{
 struct ofdpa_port *VAR_4 = VAR_1->wpriv;
 __be16 VAR_5 = FUNC_2(VAR_4, VAR_2, ((void*)0));

 if (!FUNC_1(VAR_4))
  return -VAR_0;

 return FUNC_0(VAR_4, VAR_3, VAR_5, 0);
}
