
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_board {scalar_t__ layout; scalar_t__ ao_nchan; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(const struct pcidas64_board *VAR_1)
{
 return VAR_1->ao_nchan && VAR_1->layout != VAR_0;
}
