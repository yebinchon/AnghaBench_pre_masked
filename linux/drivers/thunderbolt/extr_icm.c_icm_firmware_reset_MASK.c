
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tb_nhi {scalar_t__ iobase; } ;
struct tb {int dummy; } ;
struct icm {int (* cio_reset ) (struct tb*) ;int upstream_port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct tb*) ;
 struct icm* FUNC_3 (struct tb*) ;

__attribute__((used)) static int FUNC_4(struct tb *VAR_5, struct tb_nhi *VAR_6)
{
 struct icm *VAR_7 = FUNC_3(VAR_5);
 u32 VAR_8;

 if (!VAR_7->upstream_port)
  return -VAR_0;


 VAR_8 = FUNC_0(VAR_6->iobase + VAR_1);
 VAR_8 |= VAR_2;
 FUNC_1(VAR_8, VAR_6->iobase + VAR_1);


 VAR_8 = FUNC_0(VAR_6->iobase + VAR_1);
 VAR_8 |= VAR_4;
 VAR_8 |= VAR_3;
 FUNC_1(VAR_8, VAR_6->iobase + VAR_1);


 return VAR_7->cio_reset(VAR_5);
}
