
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zs_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (struct zs_port*,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct zs_port *VAR_8,
     struct zs_port *VAR_9)
{
 u8 VAR_10, VAR_11;
 unsigned int VAR_12;

 VAR_10 = FUNC_0(VAR_8, VAR_2);
 VAR_11 = FUNC_0(VAR_9, VAR_2);

 VAR_12 = ((VAR_11 & VAR_0) ? VAR_5 : 0) |
  ((VAR_11 & VAR_1) ? VAR_4 : 0) |
  ((VAR_10 & VAR_1) ? VAR_7 : 0) |
  ((VAR_10 & VAR_3) ? VAR_6 : 0);

 return VAR_12;
}
