
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isowbuf_t {int write; int idle; int* data; int wbits; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct isowbuf_t*,int,int) ;

__attribute__((used)) static inline void FUNC_2(struct isowbuf_t *VAR_1)
{
 int VAR_2;


 FUNC_1(VAR_1, 0x7e7e, 8);

 VAR_2 = VAR_1->write;
 VAR_1->idle = VAR_1->data[VAR_2];
 FUNC_0(VAR_0, "idle fill byte %02x", VAR_1->idle);

 VAR_1->data[VAR_2] &= (1 << VAR_1->wbits) - 1;
}
