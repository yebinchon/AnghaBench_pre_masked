
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ windowLog; } ;
struct TYPE_6__ {TYPE_1__ cParams; } ;
typedef TYPE_2__ ZSTD_parameters ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ FUNC_1 (unsigned int,size_t,int ) ;

__attribute__((used)) static ZSTD_parameters FUNC_2(unsigned int VAR_2,
       size_t VAR_3)
{
 ZSTD_parameters VAR_4 = FUNC_1(VAR_2, VAR_3, 0);

 if (VAR_4.cParams.windowLog > VAR_1)
  VAR_4.cParams.windowLog = VAR_1;
 FUNC_0(VAR_3 > VAR_0);
 return VAR_4;
}
