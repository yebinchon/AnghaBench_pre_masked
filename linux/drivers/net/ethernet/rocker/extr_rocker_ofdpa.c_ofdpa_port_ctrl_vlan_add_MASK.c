
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofdpa_port {scalar_t__* ctrls; } ;
typedef int __be16 ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (struct ofdpa_port*,int,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct ofdpa_port *VAR_2, int VAR_3,
        __be16 VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_2->ctrls[VAR_6]) {
   VAR_5 = FUNC_0(VAR_2, VAR_3,
         &VAR_1[VAR_6], VAR_4);
   if (VAR_5)
    return VAR_5;
  }
 }

 return VAR_5;
}
