
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_port {struct ofdpa_port* wpriv; } ;
struct ofdpa_port {int dummy; } ;
struct neighbour {int ha; scalar_t__ primary_key; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ofdpa_port*,int,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct rocker_port *VAR_2,
        struct neighbour *VAR_3)
{
 struct ofdpa_port *VAR_4 = VAR_2->wpriv;
 int VAR_5 = VAR_1 | VAR_0;
 __be32 VAR_6 = *(__be32 *) VAR_3->primary_key;

 return FUNC_0(VAR_4, VAR_5, VAR_6, VAR_3->ha);
}
