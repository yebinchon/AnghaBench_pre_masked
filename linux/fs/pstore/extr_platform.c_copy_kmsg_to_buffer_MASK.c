
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t bufsize; scalar_t__ buf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,size_t) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static size_t FUNC_1(int VAR_2, size_t VAR_3)
{
 size_t VAR_4;
 size_t VAR_5;

 VAR_4 = VAR_2 + VAR_3;

 if (VAR_4 > VAR_1->bufsize) {
  VAR_5 = VAR_4 - VAR_1->bufsize + VAR_2;
  FUNC_0(VAR_1->buf, VAR_0, VAR_2);
  FUNC_0(VAR_1->buf + VAR_2, VAR_0 + VAR_5,
     VAR_1->bufsize - VAR_2);
  VAR_4 = VAR_1->bufsize;
 } else
  FUNC_0(VAR_1->buf, VAR_0, VAR_4);

 return VAR_4;
}
