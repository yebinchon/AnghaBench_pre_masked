
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cas {void** tx_tiny_bufs; } ;


 int const VAR_0 ;

__attribute__((used)) static inline void *FUNC_0(struct cas *VAR_1, const int VAR_2,
    const int VAR_3)
{
 return VAR_1->tx_tiny_bufs[VAR_2] + VAR_0*VAR_3;
}
